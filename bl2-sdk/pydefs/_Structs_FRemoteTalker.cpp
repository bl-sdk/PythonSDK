#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRemoteTalker()
{
    py::class_< FRemoteTalker >("FRemoteTalker")
        .def_readwrite("TalkerId", &FRemoteTalker::TalkerId)
        .def_readwrite("LastNotificationTime", &FRemoteTalker::LastNotificationTime)
  ;
}