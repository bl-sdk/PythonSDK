#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomPropertyItemHandler(py::module &m)
{
    py::class_< UCustomPropertyItemHandler,  UInterface   >(m, "UCustomPropertyItemHandler")
          ;
}