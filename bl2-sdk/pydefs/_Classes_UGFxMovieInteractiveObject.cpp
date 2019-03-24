#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieInteractiveObject(py::module &m)
{
    py::class_< UGFxMovieInteractiveObject,  UGearboxGFxMovie   >(m, "UGFxMovieInteractiveObject")
		.def_static("StaticClass", &UGFxMovieInteractiveObject::StaticClass, py::return_value_policy::reference)
          ;
}