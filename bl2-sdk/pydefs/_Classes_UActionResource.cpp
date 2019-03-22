#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionResource(py::module &m)
{
    py::class_< UActionResource,  UObject   >(m, "UActionResource")
          ;
}