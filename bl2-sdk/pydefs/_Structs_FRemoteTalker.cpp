#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRemoteTalker()
{
    class_< FRemoteTalker >("FRemoteTalker", no_init)
        .def_readwrite("TalkerId", &FRemoteTalker::TalkerId)
        .def_readwrite("LastNotificationTime", &FRemoteTalker::LastNotificationTime)
  ;
}