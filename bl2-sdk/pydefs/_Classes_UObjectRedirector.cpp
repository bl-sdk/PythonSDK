#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectRedirector(py::module &m)
{
    py::class_< UObjectRedirector,  UObject   >(m, "UObjectRedirector")
          ;
}