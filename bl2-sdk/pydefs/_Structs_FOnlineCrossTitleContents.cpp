#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineCrossTitleContent()
{
    py::class_< FOnlineCrossTitleContent,  FOnlineContent   >("FOnlineCrossTitleContent")
        .def_readwrite("TitleId", &FOnlineCrossTitleContent::TitleId)
  ;
}