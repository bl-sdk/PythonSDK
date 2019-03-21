#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PrepareSavedMapChange()
{
    class_< UWillowSeqAct_PrepareSavedMapChange, bases< USeqAct_PrepareMapChange >  , boost::noncopyable>("UWillowSeqAct_PrepareSavedMapChange", no_init)
        .def("StaticClass", &UWillowSeqAct_PrepareSavedMapChange::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}