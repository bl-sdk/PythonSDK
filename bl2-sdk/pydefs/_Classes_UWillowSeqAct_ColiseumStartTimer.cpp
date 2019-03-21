#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumStartTimer()
{
    class_< UWillowSeqAct_ColiseumStartTimer, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumStartTimer", no_init)
        .def_readwrite("CountdownLength", &UWillowSeqAct_ColiseumStartTimer::CountdownLength)
        .def("StaticClass", &UWillowSeqAct_ColiseumStartTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumStartTimer::eventActivated)
        .staticmethod("StaticClass")
  ;
}