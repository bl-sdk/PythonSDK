#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_QueryTeleporterStatus()
{
    class_< UWillowSeqAct_QueryTeleporterStatus, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_QueryTeleporterStatus", no_init)
        .def("StaticClass", &UWillowSeqAct_QueryTeleporterStatus::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}