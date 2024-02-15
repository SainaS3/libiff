/*
 * Copyright (c) 2012 Sander van der Burg
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so, 
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "field.h"
#include "io.h"

IFF_Bool IFF_deriveSuccess(const IFF_FieldStatus status)
{
    return (status != IFF_FIELD_FAILURE);
}

IFF_FieldStatus IFF_readUByteField(FILE *file, IFF_UByte *value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_UByte))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_readUByte(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_UByte);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_writeUByteField(FILE *file, const IFF_UByte value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_UByte))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_writeUByte(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_UByte);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_readUWordField(FILE *file, IFF_UWord *value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_UWord))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_readUWord(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_UWord);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_writeUWordField(FILE *file, const IFF_UWord value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_UWord))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_writeUWord(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_UWord);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_readWordField(FILE *file, IFF_Word *value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_Word))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_readWord(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_Word);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_writeWordField(FILE *file, const IFF_Word value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_Word))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_writeWord(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_Word);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_readULongField(FILE *file, IFF_ULong *value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_ULong))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_readULong(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_ULong);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_writeULongField(FILE *file, const IFF_ULong value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_ULong))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_writeULong(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_ULong);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_readLongField(FILE *file, IFF_Long *value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_Long))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_readLong(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_Long);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}

IFF_FieldStatus IFF_writeLongField(FILE *file, const IFF_Long value, const IFF_Chunk *chunk, const char *attributeName, IFF_Long *bytesProcessed)
{
    if(*bytesProcessed > chunk->chunkSize - sizeof(IFF_Long))
        return IFF_FIELD_LAST;
    else
    {
        if(IFF_writeLong(file, value, chunk->chunkId, attributeName))
        {
            *bytesProcessed = *bytesProcessed + sizeof(IFF_Long);
            return IFF_FIELD_MORE;
        }
        else
            return IFF_FIELD_FAILURE;
    }
}
