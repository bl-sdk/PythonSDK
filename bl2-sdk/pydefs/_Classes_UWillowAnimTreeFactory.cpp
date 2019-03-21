#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimTreeFactory(py::object m)
{
    py::class_< UWillowAnimTreeFactory,  UFactory   >(m, "UWillowAnimTreeFactory")
        .def("StaticClass", &UWillowAnimTreeFactory::StaticClass, py::return_value_policy::reference)
          ;
}