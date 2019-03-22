#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameTypes(py::module &m)
{
    py::class_< UGameTypes,  UObject   >(m, "UGameTypes")
          ;
}