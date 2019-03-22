#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChannel(py::module &m)
{
    py::class_< UChannel,  UObject   >(m, "UChannel")
          ;
}