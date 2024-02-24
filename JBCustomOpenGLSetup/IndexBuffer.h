#pragma once
#include "ShapeObject.h"

/* Still haven't transfered over to using this */
class IndexBuffer
{
	unsigned int m_RendererID;

	public:
		IndexBuffer(const void* data, unsigned int size);
		~IndexBuffer();
		void Bind();
		void Unbind();
};