#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetConnection(py::module &m)
{
    py::class_< UNetConnection,  UPlayer   >(m, "UNetConnection")
        .def_readwrite("Children", &UNetConnection::Children)
          ;
}