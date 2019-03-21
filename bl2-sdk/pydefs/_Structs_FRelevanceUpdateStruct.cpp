#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRelevanceUpdateStruct()
{
    class_< FRelevanceUpdateStruct >("FRelevanceUpdateStruct", no_init)
        .def_readwrite("FromRealViewer", &FRelevanceUpdateStruct::FromRealViewer)
        .def_readwrite("SrcLocation", &FRelevanceUpdateStruct::SrcLocation)
        .def_readwrite("ToPawn", &FRelevanceUpdateStruct::ToPawn)
        .def_readwrite("TimeRequested", &FRelevanceUpdateStruct::TimeRequested)
        .def_readwrite("ShouldRemove", &FRelevanceUpdateStruct::ShouldRemove)
        .def_readwrite("NextUpdateTime", &FRelevanceUpdateStruct::NextUpdateTime)
  ;
}