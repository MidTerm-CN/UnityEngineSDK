# Hello UnityEngine SDK

"Good tools are important parts of successes."

------

### Introduction

As the name implies, this repository offers a mature SDK for reversing project, witch will give you a enjoyable and memorable feeling.

#### Usage

Before using this repository, you should know the [NaResolver ](https://github.com/NaOrganization/NaResolver)offering the basics api.

So in base, you should setup NaResolver first.

```c++
if (!naResolverInstance.Setup())
    ...
```

Then, just include our sdk.

```C++
#include "NaResolver.h"
#include "mscorlib.h"
#include "UnityEngine.CoreModule.h"
#include "UnityEngine.AnimationModule.h"
#include "UnityEngine.PhysicsModule.h"
#include "UnityEngine.IMGUIModule.h"
```