#pragma once

#include "GLTest.h"
#include "GLFramebuffer.h"


class Test_PBO : public GLTest
{
    GLint viewPort[4];

	unsigned char * downsampleData;
    std::shared_ptr<GLFramebuffer> downsample;
	std::shared_ptr<GLTexture2D> downsampleTexture;

    int readIndex;
    int writeIndex;
    GLuint pbo[2];

public:
    Test_PBO(std::shared_ptr<ContextBase> & c, const int width = GLTEST_DEFAULT_WIDTH, const int height = GLTEST_DEFAULT_HEIGHT, const int depth = GLTEST_DEFAULT_DEPTH);

    virtual std::string name() const;

	virtual bool pre();
	virtual bool post();

    ~Test_PBO();
};