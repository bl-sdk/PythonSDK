#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatChannel(py::module &m)
{
    py::class_< UStatChannel,  UChannel   >(m, "UStatChannel")
          ;
}