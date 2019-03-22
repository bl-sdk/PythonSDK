#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayThroughCountAttributeValueResolver(py::module &m)
{
    py::class_< UPlayThroughCountAttributeValueResolver,  UAttributeValueResolver   >(m, "UPlayThroughCountAttributeValueResolver")
        .def_readwrite("IncludePlaythroughThree", &UPlayThroughCountAttributeValueResolver::IncludePlaythroughThree)
        .def("StaticClass", &UPlayThroughCountAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}