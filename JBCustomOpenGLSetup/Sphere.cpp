class LED_cube {
public:
    int n, map[16][16][16]; // Assuming a 16x16x16 cube

    LED_cube() { n = 16; }

    void cls(int col) {
        for (int x = 0; x < n; x++)
            for (int y = 0; y < n; y++)
                for (int z = 0; z < n; z++)
                    map[x][y][z] = col;
    }

    void sphere(int x0, int y0, int z0, int r, int col) {
        int xa = x0 - r, xb = x0 + r;
        int ya = y0 - r, yb = y0 + r;
        int za = z0 - r, zb = z0 + r;

        for (int x = xa; x < xb; x++) {
            for (int y = ya; y < yb; y++) {
                for (int z = za; z < zb; z++) {
                    int dx = x - x0, dy = y - y0, dz = z - z0;
                    if (dx * dx + dy * dy + dz * dz == r * r) {
                        if (x >= 0 && x < n && y >= 0 && y < n && z >= 0 && z < n)
                            map[x][y][z] = col;
                    }
                }
            }
        }
    }
};
