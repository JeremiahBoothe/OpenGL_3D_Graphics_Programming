#pragma once
#include "ShapeObject.h"

/* Still haven't transfered over to using this */
class VertexBuffer
{
	unsigned int m_RendererID;

	public:
		VertexBuffer(const void* data, unsigned int size);

		~VertexBuffer();

		void Bind();
		void Unbind();
};