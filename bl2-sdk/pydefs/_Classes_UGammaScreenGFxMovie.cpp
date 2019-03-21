#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGammaScreenGFxMovie()
{
    py::class_< UGammaScreenGFxMovie,  UWillowGFxMovie3D   >("UGammaScreenGFxMovie")
        .def("StaticClass", &UGammaScreenGFxMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}