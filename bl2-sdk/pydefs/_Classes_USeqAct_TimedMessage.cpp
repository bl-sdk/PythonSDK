#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_TimedMessage()
{
    class_< USeqAct_TimedMessage, bases< USeqAct_Log >  , boost::noncopyable>("USeqAct_TimedMessage", no_init)
        .def_readwrite("MessageTime", &USeqAct_TimedMessage::MessageTime)
        .def("StaticClass", &USeqAct_TimedMessage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}