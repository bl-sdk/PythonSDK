#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGbxMessageManager()
{
    class_< UGbxMessageManager, bases< UObject >  , boost::noncopyable>("UGbxMessageManager", no_init)
        .def_readwrite("Listeners", &UGbxMessageManager::Listeners)
        .def_readwrite("MessagesToSend", &UGbxMessageManager::MessagesToSend)
        .def_readwrite("SentMessagesRecently", &UGbxMessageManager::SentMessagesRecently)
        .def_readwrite("DistributionInterval", &UGbxMessageManager::DistributionInterval)
        .def_readwrite("MaxMessagesPerDistribution", &UGbxMessageManager::MaxMessagesPerDistribution)
        .def("StaticClass", &UGbxMessageManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveListener", &UGbxMessageManager::RemoveListener)
        .def("AddListener", &UGbxMessageManager::AddListener)
        .def("PostMessage", &UGbxMessageManager::PostMessage)
        .def("AllocateMessage", &UGbxMessageManager::AllocateMessage, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}