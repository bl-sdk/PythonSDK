#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPreviewAnimSetsStruct()
{
    class_< FPreviewAnimSetsStruct >("FPreviewAnimSetsStruct", no_init)
        .def_readwrite("DisplayName", &FPreviewAnimSetsStruct::DisplayName)
        .def_readwrite("PreviewAnimSets", &FPreviewAnimSetsStruct::PreviewAnimSets)
  ;
}