#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSplineAnimPathData(py::object m)
{
    py::class_< FSplineAnimPathData >(m, "FSplineAnimPathData")
        .def_readwrite("StartSpline", &FSplineAnimPathData::StartSpline)
        .def_readwrite("AnimSeqName", &FSplineAnimPathData::AnimSeqName)
  ;
}