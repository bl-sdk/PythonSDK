#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerControllerAttributeContextResolver(py::module &m)
{
    py::class_< UPlayerControllerAttributeContextResolver,  UAttributeContextResolver   >(m, "UPlayerControllerAttributeContextResolver")
          ;
}