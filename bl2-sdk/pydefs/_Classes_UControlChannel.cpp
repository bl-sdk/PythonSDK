#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UControlChannel(py::module &m)
{
    py::class_< UControlChannel,  UChannel   >(m, "UControlChannel")
          ;
}