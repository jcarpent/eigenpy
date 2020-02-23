/*
 * Copyright 2020 INRIA
 */

#ifndef __eigenpy_numpy_hpp__
#define __eigenpy_numpy_hpp__

#include <boost/python.hpp>
#include "eigenpy/config.hpp"

#ifndef PY_ARRAY_UNIQUE_SYMBOL
  #define PY_ARRAY_UNIQUE_SYMBOL EIGENPY_ARRAY_API
#endif

#include <numpy/numpyconfig.h>
#ifdef NPY_1_8_API_VERSION
  #define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#endif

#include <numpy/noprefix.h>

#define EIGENPY_GET_PY_ARRAY_TYPE(array) PyArray_ObjectType(reinterpret_cast<PyObject *>(array), 0)

namespace eigenpy
{
  void EIGENPY_DLLEXPORT import_numpy();
}

#endif // ifndef __eigenpy_numpy_hpp__