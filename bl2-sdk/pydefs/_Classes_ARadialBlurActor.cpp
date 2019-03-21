#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARadialBlurActor()
{
    py::class_< ARadialBlurActor,  AActor   >("ARadialBlurActor")
        .def_readwrite("RadialBlur", &ARadialBlurActor::RadialBlur)
        .def("StaticClass", &ARadialBlurActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}