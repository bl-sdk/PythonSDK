#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARadialBlurActor(py::module &m)
{
    py::class_< ARadialBlurActor,  AActor   >(m, "ARadialBlurActor")
        .def_readwrite("RadialBlur", &ARadialBlurActor::RadialBlur)
          ;
}