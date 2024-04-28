// Included to get familiar with it, but not used in the program
#define GLM_ENABLE_EXPERIMENTAL
#define STB_IMAGE_IMPLEMENTATION
#include <GLFW\glfw3.h>
#include <linmath.h\linmath.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <vector>
#include <windows.h>
#include <time.h>

using namespace std;
class Brick;
int score = 0;
int ball = 5;

bool isCirclePresent = false;

const float DEG2RAD = 3.14159 / 180;

void processInput(GLFWwindow* window, Brick& brick);

enum BRICKTYPE { REFLECTIVE, DESTRUCTABLE };
enum ONOFF { ON, OFF };

class Brick
{
public:
	float red, green, blue;
	float x, y, width;
	BRICKTYPE brick_type;
	ONOFF onoff;

	Brick(BRICKTYPE bt, float xx, float yy, float ww, float rr, float gg, float bb)
	{
		brick_type = bt; 
		x = xx; 
		y = yy; 
		width = ww; 
		red = rr; 
		green = gg; 
		blue = bb;
		onoff = ON;
	};

	// Method to update brick position
	void move(float dx)
	{
		x += dx;
	}
	
	// user controlled brick that shoots circles
	void drawBrick2()
	{
		if (onoff == ON)
		{
			double halfside = width / 4;

			glColor3d(red, green, blue);
			glBegin(GL_POLYGON);

			glVertex2d(x + halfside + 0.1f, y + halfside);
			glVertex2d(x + halfside + 0.1f, y - halfside);
			glVertex2d(x - halfside, y - halfside);
			glVertex2d(x - halfside, y + halfside);

			glEnd();
		}
	}

	void drawBrick()
	{
		if (onoff == ON)
		{
			double halfside = width / 4;

			glColor3d(red, green, blue);
			glBegin(GL_POLYGON);

			glVertex2d(x + halfside, y + halfside);
			glVertex2d(x + halfside, y - halfside);
			glVertex2d(x - halfside, y - halfside);
			glVertex2d(x - halfside, y + halfside);

			glEnd();
		}
	}
};

class Circle
{
public:
	float red, green, blue;
	float radius;
	float x;
	float y;
	float speed;
	int direction; // 1=up 2=right 3=down 4=left 5 = up right   6 = up left  7 = down right  8= down left

	Circle(double xx, double yy, double rr, int dir, float rad, float r, float g, float b)
	{
		x = xx;
		y = yy;
		radius = rr;
		red = r;
		green = g;
		blue = b;
		radius = rad;
		direction = dir;
		speed = 0.01;
	}

	void CheckCollision(Brick* brk)
	{
		if (brk->brick_type == REFLECTIVE)
		{
			if ((x > brk->x - brk->width && x <= brk->x + brk->width) && (y > brk->y - brk->width && y <= brk->y + brk->width))
			{
				direction = GetRandomDirection();
				x = x + 0.03;
				y = y + 0.04;
			}
		}
		else if (brk->brick_type == DESTRUCTABLE)
		{
			if ((x > brk->x - brk->width && x <= brk->x + brk->width) && (y > brk->y - brk->width && y <= brk->y + brk->width))
			{
				brk->onoff = OFF;
				score += 1;
			}
		}
	}

	int GetRandomDirection()
	{
		return (rand() % 8) + 1;
	}

	void MoveOneStep()
	{
		if (direction == 1 || direction == 5 || direction == 6)  // up
		{
			if (y > -1 + radius)
			{
				y -= speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}

		if (direction == 2 || direction == 5 || direction == 7)  // right
		{
			if (x < 1 - radius)
			{
				x += speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}

		if (direction == 3 || direction == 7 || direction == 8)  // down
		{
			if (y < 1 - radius) {
				y += speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}

		if (direction == 4 || direction == 6 || direction == 8)  // left
		{
			if (x > -1 + radius) {
				x -= speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}
	}

	void DrawCircle()
	{
		glColor3f(red, green, blue);
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float degInRad = i * DEG2RAD;
			glVertex2f((cos(degInRad) * radius) + x, (sin(degInRad) * radius) + y);
		}
		glEnd();
	}
};

vector<Circle> world;

int main2(void) {
	srand(time(NULL));

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	GLFWwindow* window = glfwCreateWindow(1920, 1080, "Random World of Circles", NULL, NULL);
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	Brick brick(REFLECTIVE, -0.75, 0.75, 0.2, 1, 1, 0);
	Brick brick2(DESTRUCTABLE, -0.75, 0.5, 0.2, 0, 1, 0);
	Brick brick3(DESTRUCTABLE, -0.75, 0.25, 0.2, 0, 1, 1);
	Brick brick4(DESTRUCTABLE, -0.75, 0, 0.2, 1, 0.5, 0.5);
	Brick brick5(REFLECTIVE, -0.25, 0.75, 0.2, 1, 1, 0);
	Brick brick6(DESTRUCTABLE, -0.25, 0.5, 0.2, 0, 1, 0);
	Brick brick7(DESTRUCTABLE, -0.25, 0.25, 0.2, 0, 1, 1);
	Brick brick8(DESTRUCTABLE, -0.25, 0, 0.2, 1, 0.5, 0.5);
	Brick brick9(REFLECTIVE, 0.25, 0.75, 0.2, 1, 1, 0);
	Brick brick10(DESTRUCTABLE, 0.25, 0.5, 0.2, 0, 1, 0);
	Brick brick11(DESTRUCTABLE, 0.25, 0.25, 0.2, 0, 1, 1);
	Brick brick12(REFLECTIVE, 0.25, 0, 0.2, 1, 0.5, 0.5);
	Brick brick13(DESTRUCTABLE, 0.75, 0.75, 0.2, 1, 1, 0);
	Brick brick14(DESTRUCTABLE, 0.75, 0.5, 0.2, 0, 1, 0);
	Brick brick15(DESTRUCTABLE, 0.75, 0.25, 0.2, 0, 1, 1);
	Brick brick16(REFLECTIVE, 0.75, 0, 0.2, 1, 0.5, 0.5);

	Brick UserBrick(REFLECTIVE, 0, -0.6, 0.2, 1, 0.5, 0.5);

	while (!glfwWindowShouldClose(window)) {
		//Setup View
		float ratio;
		int width, height;
		glfwGetFramebufferSize(window, &width, &height);
		ratio = width / (float)height;
		glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);

		processInput(window, UserBrick);
		// Checks to determine if a circle exists, if not then it creates a circle when spacebar is pressed.
		if (!isCirclePresent && glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) {
			double r = static_cast<float>(rand()) / RAND_MAX;
			double g = static_cast<float>(rand()) / RAND_MAX;
			double b = static_cast<float>(rand()) / RAND_MAX;
			Circle newCircle(0, 0, 0.1, 1, 0.05, r, g, b);
			world.push_back(newCircle);
			isCirclePresent = true;
		}

		// Additional checks, if the ball is present then a new one is not created, if a ball is present and moves behind the player and is no longer present, the user loses a ball and can now create a new one.
		if (isCirclePresent) {
			world[0].MoveOneStep();
			world[0].DrawCircle();
			// Check if the circle has moved off the screen
			if (world[0].y < -0.9) {
				isCirclePresent = false;
				world.clear();
				ball -= 1;
			}
		}

		// Exit condition when the number of balls remaining is 0.  The player starts with 5, when the ball goes behind the player they lose 1, at 0 the program exits
		if (ball == 0) {
			return 0;
		}

		// Collision checks against bricks
		for (int i = 0; i < world.size(); i++)
		{
			world[i].CheckCollision(&brick);
			world[i].CheckCollision(&brick2);
			world[i].CheckCollision(&brick3);
			world[i].CheckCollision(&brick4);
			world[i].CheckCollision(&brick5);
			world[i].CheckCollision(&brick6);
			world[i].CheckCollision(&brick7);
			world[i].CheckCollision(&brick8);
			world[i].CheckCollision(&brick9);
			world[i].CheckCollision(&brick10);
			world[i].CheckCollision(&brick11);
			world[i].CheckCollision(&brick12);
			world[i].CheckCollision(&brick13);
			world[i].CheckCollision(&brick14);
			world[i].CheckCollision(&brick15);
			world[i].CheckCollision(&brick16);
			world[i].CheckCollision(&UserBrick);
			world[i].MoveOneStep();

		}


		// draw bricks
		brick.drawBrick();
		brick2.drawBrick();
		brick3.drawBrick();
		brick4.drawBrick();
		brick5.drawBrick();
		brick6.drawBrick();
		brick7.drawBrick();
		brick8.drawBrick();
		brick9.drawBrick();
		brick10.drawBrick();
		brick11.drawBrick();
		brick12.drawBrick();
		brick13.drawBrick();
		brick14.drawBrick();
		brick15.drawBrick();
		brick16.drawBrick();
		UserBrick.drawBrick2();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}

void processInput(GLFWwindow* window, Brick& brick)
{
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
	{
		brick.move(0.01f);
	}
	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
	{
		brick.move(-0.01f);
	}

	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);

	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
	{
		double r, g, b;
		r = rand() / 10000;
		g = rand() / 10000;
		b = rand() / 10000;
		Circle B(brick.x, brick.y, 02, 2, 0.02, r, g, b);
		world.push_back(B);
	}
}