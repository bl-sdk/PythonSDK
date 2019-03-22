#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USaveGameChannel(py::module &m)
{
    py::class_< USaveGameChannel,  UChannel   >(m, "USaveGameChannel")
          ;
}