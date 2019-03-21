#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FQueuedAvatarRequest()
{
    class_< FQueuedAvatarRequest >("FQueuedAvatarRequest", no_init)
        .def_readwrite("CheckTime", &FQueuedAvatarRequest::CheckTime)
        .def_readwrite("NumberOfAttempts", &FQueuedAvatarRequest::NumberOfAttempts)
        .def_readwrite("PlayerNetId", &FQueuedAvatarRequest::PlayerNetId)
        .def_readwrite("Size", &FQueuedAvatarRequest::Size)
        .def_readwrite("ReadOnlineAvatarCompleteDelegate", &FQueuedAvatarRequest::ReadOnlineAvatarCompleteDelegate)
  ;
}