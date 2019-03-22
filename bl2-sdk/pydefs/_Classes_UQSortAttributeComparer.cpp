#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UQSortAttributeComparer(py::module &m)
{
    py::class_< UQSortAttributeComparer,  UQSortComparer   >(m, "UQSortAttributeComparer")
        .def_readwrite("Attribute", &UQSortAttributeComparer::Attribute)
        .def("StaticClass", &UQSortAttributeComparer::StaticClass, py::return_value_policy::reference)
          ;
}