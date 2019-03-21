#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieInteractiveObject()
{
    py::class_< UGFxMovieInteractiveObject,  UGearboxGFxMovie   >("UGFxMovieInteractiveObject")
        .def("StaticClass", &UGFxMovieInteractiveObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}