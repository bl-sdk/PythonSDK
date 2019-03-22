#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerStatAttributeValueResolver(py::module &m)
{
    py::class_< UPlayerStatAttributeValueResolver,  UAttributeValueResolver   >(m, "UPlayerStatAttributeValueResolver")
        .def_readwrite("StatName", &UPlayerStatAttributeValueResolver::StatName)
          ;
}