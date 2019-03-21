#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAllDead()
{
    class_< UWillowSeqAct_ColiseumAllDead, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumAllDead", no_init)
        .def("StaticClass", &UWillowSeqAct_ColiseumAllDead::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumAllDead::eventActivated)
        .staticmethod("StaticClass")
  ;
}