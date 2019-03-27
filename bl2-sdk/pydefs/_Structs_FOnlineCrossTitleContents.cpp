#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineCrossTitleContent(py::module &m)
{
    py::class_< FOnlineCrossTitleContent,  FOnlineContent   >(m, "FOnlineCrossTitleContent")
        .def_readwrite("TitleId", &FOnlineCrossTitleContent::TitleId)
  ;
}