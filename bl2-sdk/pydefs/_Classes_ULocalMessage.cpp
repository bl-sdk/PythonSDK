#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalMessage()
{
    class_< ULocalMessage, bases< UObject >  , boost::noncopyable>("ULocalMessage", no_init)
        .def_readwrite("Lifetime", &ULocalMessage::Lifetime)
        .def_readwrite("DrawColor", &ULocalMessage::DrawColor)
        .def_readwrite("MsgType", &ULocalMessage::MsgType)
        .def("StaticClass", &ULocalMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("PartiallyDuplicates", &ULocalMessage::PartiallyDuplicates)
        .def("IsConsoleMessage", &ULocalMessage::IsConsoleMessage)
        .def("GetLifeTime", &ULocalMessage::GetLifeTime)
        .def("GetColor", &ULocalMessage::GetColor)
        .def("GetConsoleColor", &ULocalMessage::GetConsoleColor)
        .def("GetString", &ULocalMessage::GetString)
        .def("GetMsgType", &ULocalMessage::GetMsgType)
        .def("ClientReceive", &ULocalMessage::ClientReceive)
        .staticmethod("StaticClass")
  ;
}