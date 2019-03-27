#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChannelDownload(py::module &m)
{
    py::class_< UChannelDownload,  UDownload   >(m, "UChannelDownload")
		.def_static("StaticClass", &UChannelDownload::StaticClass, py::return_value_policy::reference)
          ;
}