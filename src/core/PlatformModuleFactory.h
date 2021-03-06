// Copyright (c) 2014-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef PLATFORMMODULEFACTORY_H
#define PLATFORMMODULEFACTORY_H

class ServiceSender;
class WebProcessManager;
class ContainerAppManager;
class DeviceInfo;
class WebAppManagerConfig;

class PlatformModuleFactory {
public:
    ServiceSender* getServiceSender() { return createServiceSender(); }
    WebProcessManager* getWebProcessManager() { return createWebProcessManager(); }
    ContainerAppManager* getContainerAppManager() { return createContainerAppManager(); }
    DeviceInfo* getDeviceInfo() { return createDeviceInfo(); }
    WebAppManagerConfig* getWebAppManagerConfig() { return createWebAppManagerConfig(); }

protected:
    virtual ServiceSender* createServiceSender() = 0;
    virtual WebProcessManager* createWebProcessManager() = 0;
    virtual ContainerAppManager* createContainerAppManager() = 0;
    virtual DeviceInfo* createDeviceInfo() = 0;
    virtual WebAppManagerConfig* createWebAppManagerConfig() = 0;
};

#endif /* PLATFORMMODULEFACTORY_H */
