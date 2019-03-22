#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTcpNetDriver(py::module &m)
{
    py::class_< UTcpNetDriver,  UNetDriver   >(m, "UTcpNetDriver")
          ;
}