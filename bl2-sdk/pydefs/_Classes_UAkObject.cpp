#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkObject(py::object m)
{
    py::class_< UAkObject,  UObject   >(m, "UAkObject")
        .def_readwrite("ShortId", &UAkObject::ShortId)
        .def("StaticClass", &UAkObject::StaticClass, py::return_value_policy::reference)
          ;
}