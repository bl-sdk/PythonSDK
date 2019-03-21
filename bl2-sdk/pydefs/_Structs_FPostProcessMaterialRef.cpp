#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessMaterialRef()
{
    py::class_< FPostProcessMaterialRef >("FPostProcessMaterialRef")
        .def_readwrite("Effect", &FPostProcessMaterialRef::Effect)
  ;
}