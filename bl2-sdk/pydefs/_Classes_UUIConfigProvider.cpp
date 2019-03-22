#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigProvider(py::module &m)
{
    py::class_< UUIConfigProvider,  UUIDataProvider   >(m, "UUIConfigProvider")
          ;
}