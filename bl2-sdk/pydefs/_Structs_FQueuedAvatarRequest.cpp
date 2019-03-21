#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQueuedAvatarRequest()
{
    py::class_< FQueuedAvatarRequest >("FQueuedAvatarRequest")
        .def_readwrite("CheckTime", &FQueuedAvatarRequest::CheckTime)
        .def_readwrite("NumberOfAttempts", &FQueuedAvatarRequest::NumberOfAttempts)
        .def_readwrite("PlayerNetId", &FQueuedAvatarRequest::PlayerNetId)
        .def_readwrite("Size", &FQueuedAvatarRequest::Size)
        .def_readwrite("ReadOnlineAvatarCompleteDelegate", &FQueuedAvatarRequest::ReadOnlineAvatarCompleteDelegate)
  ;
}