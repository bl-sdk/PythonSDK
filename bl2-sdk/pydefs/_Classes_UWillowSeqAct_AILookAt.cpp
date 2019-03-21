#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AILookAt()
{
    class_< UWillowSeqAct_AILookAt, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AILookAt", no_init)
        .def_readwrite("LookAt", &UWillowSeqAct_AILookAt::LookAt)
        .def("StaticClass", &UWillowSeqAct_AILookAt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}