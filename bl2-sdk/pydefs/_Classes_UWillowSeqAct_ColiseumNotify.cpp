#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumNotify()
{
    class_< UWillowSeqAct_ColiseumNotify, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumNotify", no_init)
        .def_readwrite("NotifyType", &UWillowSeqAct_ColiseumNotify::NotifyType)
        .def("StaticClass", &UWillowSeqAct_ColiseumNotify::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumNotify::eventActivated)
        .staticmethod("StaticClass")
  ;
}