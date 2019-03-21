#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxInteraction()
{
    class_< UGFxInteraction, bases< UInteraction >  , boost::noncopyable>("UGFxInteraction", no_init)
        .def_readwrite("VfTable_FCallbackEventDevice", &UGFxInteraction::VfTable_FCallbackEventDevice)
        .def("StaticClass", &UGFxInteraction::StaticClass, return_value_policy< reference_existing_object >())
        .def("CloseAllMoviePlayers", &UGFxInteraction::CloseAllMoviePlayers)
        .def("NotifySplitscreenLayoutChanged", &UGFxInteraction::NotifySplitscreenLayoutChanged)
        .def("NotifyPlayerRemoved", &UGFxInteraction::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UGFxInteraction::NotifyPlayerAdded)
        .def("NotifyGameSessionEnded", &UGFxInteraction::NotifyGameSessionEnded)
        .def("GetFocusMovie", &UGFxInteraction::GetFocusMovie, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}