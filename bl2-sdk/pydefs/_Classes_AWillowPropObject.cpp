#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPropObject(py::module &m)
{
    py::class_< AWillowPropObject,  AWillowInteractiveObject   >(m, "AWillowPropObject")
		.def_static("StaticClass", &AWillowPropObject::StaticClass, py::return_value_policy::reference)
        .def("PostBeginPlay", &AWillowPropObject::PostBeginPlay)
          ;
}