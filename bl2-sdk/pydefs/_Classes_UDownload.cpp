#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownload(py::module &m)
{
    py::class_< UDownload,  UObject   >(m, "UDownload")
          ;
}