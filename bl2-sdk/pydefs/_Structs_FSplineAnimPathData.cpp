#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSplineAnimPathData()
{
    class_< FSplineAnimPathData >("FSplineAnimPathData", no_init)
        .def_readwrite("StartSpline", &FSplineAnimPathData::StartSpline)
        .def_readwrite("AnimSeqName", &FSplineAnimPathData::AnimSeqName)
  ;
}